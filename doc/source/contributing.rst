.. _contribute_SCADE_SMART_BOILER_CONTROL:

Contribute
##########

Overall guidance on contributing to a PyAnsys library appears in
`Contributing <https://dev.docs.pyansys.com/how-to/contributing.html>`_
in the *PyAnsys developer's guide*. Ensure that you are thoroughly familiar
with this guide before attempting to contribute to the Ansys SCADE smart boiler
control example.

The following contribution information is specific to the Ansys SCADE smart boiler
control interface.

Install in developer mode
-------------------------

Installing the Ansys SCADE smart boiler control interface in developer mode allows you to modify the
source and enhance it.

#. Clone the ``ansys-scade-example-smart-boiler-control`` repository:

   .. code:: bash

      git clone https://github.com/ansys/scade-example-smart-boiler-control.git

#. Access the ``scade-example-smart-boiler-control`` directory where the repository has been cloned:

   .. code:: bash

      cd scade-example-smart-boiler-control

#. Create a clean Python 3.10 environment and activate it:

   You should use the interpreter delivered with Ansys SCADE. For example,
   ``C:\Program Files\ANSYS Inc\v232\SCADE\contrib\Python310\python.exe``.

   .. code:: bash

      # Create a virtual environment
      python -m venv .venv

      # Activate it in Windows CMD environment
      .venv\Scripts\activate.bat

      # Activate it in Windows Powershell
      .venv\Scripts\Activate.ps1

#. Make sure that you have the latest required build system, documentation, testing,
   and CI tools:

   .. code:: bash

      python -m pip install -U pip     # Upgrading pip
      python -m pip install -r requierements/doc.txt     # for building the documentation

Use ``pre-commit``
^^^^^^^^^^^^^^^^^^
The example for the Ansys SCADE boiler plate interface follows the PEP8 standard as outlined in
`PEP 8 <https://dev.docs.pyansys.com/coding-style/pep8.html>`_ in
the *PyAnsys developer's guide* and implements style checking using
`pre-commit <https://pre-commit.com/>`_.

To ensure your code meets minimum code styling standards, run these commands::

  pip install pre-commit
  pre-commit run --all-files

You can also install this as a pre-commit hook by running this command::

  pre-commit install

This way, it's not possible for you to push code that fails the style checks::

  $ pre-commit install
  $ git commit -am "added my cool feature"
  Add License Headers......................................................Passed
  check for merge conflicts................................................Passed
  debug statements (python)................................................Passed
  trim trailing whitespace.................................................Passed
  check yaml...............................................................Passed
  fix requirements.txt.....................................................Passed
  Check GitHub workflows...................................................Passed

Build documentation
-------------------
To buid documentation, you can run these commands:

.. code:: bash

    # build and view the doc from a Windows environment
    .\doc\make.bat clean
    .\doc\make.bat html
    start .\doc\_build\html\index.html

Post issues
-----------
Use the `Issues <https://github.com/ansys/scade-example-smart-boiler-control/issues>`_
page for this repository to report bugs and request new features. When possible,
use the issue templates provided. If your issue does not fit into one of these templates,
click the link for opening a blank issue.

If you have general questions about the PyAnsys ecosystem, email
`pyansys.core@ansys.com <pyansys.core@ansys.com>`_. If your
question is specific to the Ansys SCADE smart boiler
control interface, ask your question in an issue as described
in the previous paragraph.

.. LINKS AND REFERENCES


.. _pip: https://pypi.org/project/pip/
.. _Sphinx: https://www.sphinx-doc.org/en/master/
