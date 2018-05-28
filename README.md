# Solutionary for Programming Evaluations

## What is this?

The *Solutionary of Programming Evaluations* is a LaTeX template to document solutionaries of programming evaluations, in general. Initially created for solutionaries of evalutions of programming courses of the Departament of Informatic Engineering of the *Pontificia Universidad Católica del Perú* (*Pontifical Catholic University of Peru*, *PUCP*), has a customizable format and easy to edit using mainly the package *listings*. This template, created by Jorge "HoraQol" Fatama Vera, student of the PUCP and General Secretary of the *Sociedad de Apoyo para Informáticos* (*Society of Support for Informatic Engineers*, *SAI PUCP*), is open to comments and improvements that increase the usefulness of this work.

## Use

There are several ways to use this template. The first and most accessible is to download the project, open the archive *programsol.sty* and customize the commands and relevant data for its use.

```bash
$ git clone https://github.com/HoraQol/programsol-latex.git
```

Another way is to download it in compressed folder and upload it to ShareLaTeX or a similar page, to modify this project online.

## Customed commands

In the archive *programsol.sty* is posible to found, in Section "Customed commands", a group of defined commands for document customing, focused on the characteristics of university evaluations in programming courses.
The referenced commands will be described in the following list:
* **\organization:** Name of the organization that makes the solutionary.
* **\university:** Name of the Universityin which the evaluated course is taught. Acronyms can also be placed instead of the full name, but it is recommended to place the last one.
* **\fb:** Link to the Facebook page of the organization. You can create similar commands for other social networks.
* **\course:** Name of the evaluation course.
* **\evalCourse:** Classification of the evaluation.
* **\currentCycle:** Denomination of the current academic cycle at the University where the evaluation was taken.
* **\questioner[A-Z]:** Name of an evaluator (can be a teacher, a Practice Header, among others). If this template is used in the evaluation solution where the name of the evaluator is not known, you can comment this command. By defect, 3 *questioners* have been created; if you want to place more, add the following ([D-Z] means that it corresponds to the sequence D, E, F ... Z):
```tex
\newcommand{\questioner[D-Z]}{Name of the questioner}
```
* **\answerer[A-Z]:** Name of a collaborator of the solutionary (either of the total of questions or a single one). If this template is used in the evaluation of an evaluation with anonymous collaboration, you can comment this command. By default, 5 *answerers* have been created; if you want to place more, add the following ([F-Z] means that it corresponds to the sequence F, G, H ... Z):
```tex
\newcommand{\answerer[F-Z]}{Name of the answerer}
```
* **\documenter:** Name of the documenter, who is the collaborator that organizes the archives and makes the documentation in LaTeX. If this person also collaborates in the realization (total or partial) of the solutionary, this command can be commented and placed in **\answerer**.
* **\email[A-Z]:** Electronic address of a collaborator. The number of electronic addresses should match the number of collaborators. In the same way with **\answerer**, 5 *e-mails* have been created; If you want to place more, add the following ([F-Z] means that it corresponds to the sequence F, G, H ... Z):
```tex
\newcommand{\email[F-Z]}{Electronic address of the answerer}
```
* **\logoTeX:** This command allows the LaTeX logo to be placed with a space at the end (by default, the **\LaTeX** command does not place a space, although several of these are placed in the corresponding .tex archive).
* **\listingName:** This command allows you to modify the generic name for the *listings* (by default, they are named as *listing*). For example: if the content we want to show are programming codes, *code* or *program* can be a good replacement.

Contact: jfatamav@e-quipu.pe, SAI PUCP (on Facebook).
