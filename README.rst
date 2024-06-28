.. role:: raw-html-m2r(raw)
   :format: html


Smart Boiler Control
====================

:raw-html-m2r:`<a href="https://www.ansys.com/fr-fr/products/embedded-software/" title=""><img src="https://img.shields.io/badge/Ansys-SCADE-ffb71b?labelColor=black&logo=data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAIAAACQkWg2AAABDklEQVQ4jWNgoDfg5mD8vE7q/3bpVyskbW0sMRUwofHD7Dh5OBkZGBgW7/3W2tZpa2tLQEOyOzeEsfumlK2tbVpaGj4N6jIs1lpsDAwMJ278sveMY2BgCA0NFRISwqkhyQ1q/Nyd3zg4OBgYGNjZ2ePi4rB5loGBhZnhxTLJ/9ulv26Q4uVk1NXV/f///////69du4Zdg78lx//t0v+3S88rFISInD59GqIH2esIJ8G9O2/XVwhjzpw5EAam1xkkBJn/bJX+v1365hxxuCAfH9+3b9/+////48cPuNehNsS7cDEzMTAwMMzb+Q2u4dOnT2vWrMHu9ZtzxP9vl/69RVpCkBlZ3N7enoDXBwEAAA+YYitOilMVAAAAAElFTkSuQmCC" alt="ANnsys SCADE" /></a>`
:raw-html-m2r:`<a href="https://www.ansys.com/fr-fr/products/embedded-software/" title=""><img src="https://tinyurl.com/2s498jkv" alt="Ansys SCADE Suite, Display, Test" /></a>`
:raw-html-m2r:`<img src="https://img.shields.io/badge/version-2024R2-blue" alt="version" />`
:raw-html-m2r:`<a href="https://opensource.org/licenses/MIT" title=""><img src="https://img.shields.io/badge/License-MIT-yellow.svg" alt="MIT" /></a>`

The Smart Boiler Control application illustrates, how touch interactivity concepts are brought into control panel with a modern/futuristic smart boiler control panel. The  Smart Boiler Control application was automatically generated from SCADE Suite® and SCADE Display®.
The Smart boiler controller is software used to control the water level in a steam boiler. It is important that the program works correctly because the quantity of water present when the steam boiler is operating must neither be too low nor too high; otherwise, the smart boiler  in front of it could be seriously affected.

This project serves as a companion to the blog series, "Designing a Next-Gen Embedded HMI," which explores the concepts implemented =>  `SCADE Smart Boiler Control – Designing a next-gen embedded HMI <https://ansyskm.ansys.com/forums/topic/scade-smart-boiler-control-designing-a-next-gen-embedded-hmi/>`_.


.. image:: pictures/screenshot.png
   :target: pictures/screenshot.png
   :alt: screenshot


Start Guide
===========

Generate, build and execute standalone application
--------------------------------------------------

Launch  SCADE Display and open the project ``model/scade-display/DisplayPanel.etp`` (File>Open). 


.. raw:: html

   <p align="center">
     <img src="pictures/fileOpenP.png" alt="file open"/>
   </p>


Select ``Windows`` configuration, this configuration enables the generation of a standalone application
running on Windows.


.. raw:: html

   <p align="center">
     <img src="pictures/selectConf.png" alt="select conf"/>
   </p>


Then click Execute.


.. raw:: html

   <p align="center">
     <img src="pictures/execute.png" alt="execute"/>
   </p>


Test Execution on host
----------------------

Launch SCADE Test and open SCADE Test project ``model/scade-test/SmartBoilerControl_Test.etp`` (File>Open).


.. raw:: html

   <p align="center">
     <img src="pictures/fileOpenSCADE.png" alt="file open scade"/>
   </p>


Project > Test tool > Execute tests


.. raw:: html

   <p align="center">
     <img src="pictures/executeTests.png" alt="execute tests"/>
   </p>

