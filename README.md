# Technology at the service of life in combating the COVID-19 pandemic – UFF FRONT in the production of mechanical ventilators <img src="https://skillicons.dev/icons?i=arduino" /> <img src="https://github.com/letfritz/COVID-ventilator/assets/161434060/d02af6c4-3ca7-47da-a604-dc2921ba0493" style="max-width: 50%; height: 50px;">

<div align="center"><br/>
  <div style="display: inline-block;">
    <img align="center" alt="stars" src="https://img.shields.io/github/stars/letfritz/CPVT3N.svg">
    <img align="center" alt="watchers" src="https://img.shields.io/github/watchers/letfritz/CPVT3N.svg">
    <img align="center" alt="forks" src="https://img.shields.io/github/forks/letfritz/CPVT3N.svg">
  </div>
  <div style="display: inline-block;">
    <img align="center" alt="downloads" src="https://img.shields.io/github/downloads/letfritz/CPVT3N/total.svg">
    <img align="center" alt="issues" src="https://img.shields.io/github/issues/letfritz/CPVT3N/total.svg">
    <img align="center" alt="issues-closed" src="https://img.shields.io/github/issues-closed/letfritz/CPVT3N/total.svg">
    <img align="center" alt="issues-pr" src="https://img.shields.io/github/issues-pr/letfritz/CPVT3N/total.svg">
    <img align="center" alt="issues-pr-closed" src="https://img.shields.io/github/issues-pr-closed/letfritz/CPVT3N/total.svg">
    <img align="center" alt="issues-pr-closed" src="https://img.shields.io/github/license/letfritz/CPVT3N.svg">
  </div>
</div><br/>

Arduino project for creating a mechanical ventilator for COVID patients.

## 📷 Screenshot
Electrical System Architecture:
![electrical_system_architecture](https://github.com/letfritz/COVID-ventilator/assets/161434060/cd5b33a1-4bef-4791-9cc3-b69dd96027ef)

Steps:
![Steps](https://github.com/letfritz/COVID-ventilator/assets/161434060/f0199e84-680d-4818-808f-e29d912b2254)

Volume Control State Machine:
![Volume_Control_State_Machine](https://github.com/letfritz/COVID-ventilator/assets/161434060/5d6c9698-e088-4bde-9232-60c9416cf0cf)

First prototype of a mechanical ventilator assembled at UFF. Emphasis on (a) the structural part of the equipment and (b) the control panel:
![first](https://github.com/letfritz/COVID-ventilator/assets/161434060/987f034d-0b2c-4305-abe3-c6c266cc9a4b)

Detailing the control panel with controls for the Inspiration/Expiration (I/E) ratio, Air Volume Control, and ventilation frequency:
<img width="232" alt="second" src="https://github.com/letfritz/COVID-ventilator/assets/161434060/b76cbe47-501b-4860-a540-1cf5214bf0c3">


## Installation
1. Download the package to a local folder (e.g. ~/DER-SmartCampus/) by running:
  ```
    git clone https://github.com/letfritz/COVID-ventilator.git
  ```
2. Run Arduino IDE and navigate to the folder (~/main/), then run the main.ino script.

## Usage
  - See description in AnáliseDeRequisitos.docx.

## License
Released under MIT license.

## 📝 About this Project
The project aims primarily to promote the supply of emergency mechanical ventilation equipment, mainly for the public health system (SUS), to patients affected by comorbidities caused by COVID-19. These devices are necessary when severe pneumonia compromises lung function, and the breathing process is carried out with immense effort (dyspnea), reducing the concentration of dissolved oxygen in the blood (hypoxemia). In critical cases of COVID-19, intubation and immediate use of mechanical ventilation are indicated.

Initiatives around the world have emerged for the development of manual mechanical breathing units (AMBU). Some of the most famous examples are the projects developed at Oxford [![Blog](https://img.shields.io/website?label=OxVentProject.com&url=https://oxvent.org/)](https://oxvent.org/) and MIT [![Blog](https://img.shields.io/website?label=E-Vent.com&url=https://e-vent.mit.edu/)](https://e-vent.mit.edu/); in Brazil, projects such as the one from COPPE at UFRJ [![Blog](https://img.shields.io/website?label=ventiladorcoppe.com&url=https://sites.google.com/peb.ufrj.br/ventiladorcoppe)](https://sites.google.com/peb.ufrj.br/ventiladorcoppe) and at USP [![Blog](https://img.shields.io/website?label=Inspire.com&url=https://www.poli.usp.br/inspire)](https://www.poli.usp.br/inspire) stand out. Among all these devices, the MIT model stands out for being a project that has undergone numerous tests and has been developed since 2010, featuring low-cost components. Additionally, after the onset of the pandemic, the working group has been making adaptations to make the project more robust and safe.

The E-Vent mechanical ventilator functions as a low-cost portable ventilator. Its main function is to assist the patient in breathing. Its construction uses few parts and has low manufacturing complexity. Mechanical force is exerted by a direct current motor coupled to a gear, which in turn moves the rods, compressing the AMBU, also known as a manual resuscitator or self-inflating bag. The AMBU is a manual device that provides positive pressure ventilation for patients who do not breathe or do so inadequately. The compression and expansion cycle of the AMBU, performed by the motor rotation, is controlled by the electronic part of the E-Vent and can be customized according to each patient's respiratory needs.

At UFF, adaptations to the E-Vent project have been developed. The main proposed changes are in the project's electronics and some adaptations in the mechanical structure to accommodate motors with other hole patterns and electrical specifications, which can be found domestically. A first prototype was built to evaluate the assembly and refine each part of the mechanical structure of the project. These parts will be manufactured using a CNC Machining Center to reduce costs with the projects. In addition, tests of precision in controlling the volume and pressure of the air pumped by the AMBU through motor rotation were also carried out during development.

The project is currently in the phase of building the second prototype and drafting a document to be submitted to ANVISA for certification of the final equipment. To do this, all standards regarding ventilation modes required by the agency will be followed so that the product can quickly meet the current demand.
