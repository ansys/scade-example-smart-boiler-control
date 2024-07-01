.. _contribute_SCADE_SMART_BOILER_CONTROL:

Contribute
##########

Overall guidance on contributing to a PyAnsys library appears in
`Contributing <https://dev.docs.pyansys.com/how-to/contributing.html>`_
in the *PyAnsys developer's guide*. Ensure that you are thoroughly familiar
with this guide before attempting to contribute to Ansys SCADE Smart Boiler Control Example.

The following contribution information is specific to Ansys SCADE Smart Boiler Control Example.

Install in developer mode
-------------------------

Installing Ansys SCADE Smart Boiler Control Example in developer mode allows you to modify the
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


Build documentation
-------------------
.. code:: bash

    # build and view the doc from a Windows environment
    .\doc\make.bat clean
    .\doc\make.bat html
    start .\doc\_build\html\index.html



Post issues
-----------

.. 
   the `Ansys SCADE Smart Boiler Control Example Issues <https://github.com/ansys/scade-example-smart-boiler-control/issues>`_

page to submit questions, report bugs, and request new features. When possible, use
these templates:

* Bug, problem, error: For filing a bug report
* Documentation error: For requesting modifications to the documentation
* Adding an example: For proposing a new example
* New feature: For requesting enhancements to the code

If your issue does not fit into one of these template categories, click
the link for opening a blank issue.

To reach the project support team, email `pyansys.core@ansys.com <pyansys.core@ansys.com>`_.

.. LINKS AND REFERENCES


.. _pip: https://pypi.org/project/pip/
.. _Sphinx: https://www.sphinx-doc.org/en/master/
