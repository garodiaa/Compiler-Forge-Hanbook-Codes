## Compiler Forge Handbook — Code Companion

![Version](https://img.shields.io/badge/Edition-1.0-7B1FA2?style=flat)
![Language](https://img.shields.io/badge/Language-C-00599C?logo=c&logoColor=white&style=flat)
![Focus](https://img.shields.io/badge/Course-Compiler%20Design-512DA8?style=flat)
![License](https://img.shields.io/badge/License-MIT-yellow?style=flat)

Solution C files for every programming exercise in Chapters 1–11 of the **Compiler Forge Handbook**, written to academically support the Compiler Design course.

-  **Book PDF**: available in the repository Releases tab.
-  **Goal**: reinforce compiler design theory with hands-on C implementations.

### Chapters & Exercises

**Chapter 1 · Introduction**

- [PP_1.1.c](PP_1.1.c): reverse a string manually (no `strrev`).
- [PP_1.2.c](PP_1.2.c): split a sentence so each word prints on a new line.

**Chapter 2 · Phases of a Compiler**

- [PP_2.1.c](PP_2.1.c): strip special characters from text.
- [PP_2.2.c](PP_2.2.c): count whitespace, digits, punctuation.
- [PP_2.3.c](PP_2.3.c): track spaces, tabs, and newlines.

**Chapter 3 · Lexical Analysis & CFG**

- [PP_3.1.c](PP_3.1.c): detect single-line comments.
- [PP_3.2.c](PP_3.2.c): count single vs multi-line comments.
- [PP_3.3.c](PP_3.3.c): remove single-line comments.
- [PP_3.4.c](PP_3.4.c): count total lines.

**Chapter 4 · Regular Expressions**

- [PP_4.1.c](PP_4.1.c): validate `(abc)*` strings.
- [PP_4.2.c](PP_4.2.c): validate `b(a|b)*b` strings.
- [PP_4.3.c](PP_4.3.c): ensure `(0|1)*1(0|1)` acceptance.

**Chapter 5 · NFA & DFA**

- [PP_5.1.c](PP_5.1.c): build a syntax token table.
- [PP_5.2.c](PP_5.2.c): tokenize input without `strtok`.

**Chapter 6 · Left Recursion & Factoring**

- [PP_6.1.c](PP_6.1.c): count article types.
- [PP_6.2.c](PP_6.2.c): remove redundant articles.

**Chapter 7 · First & Follow**

- [PP_7.1.c](PP_7.1.c): tally vowels and consonants.
- [PP_7.2.c](PP_7.2.c): extract only vowels.
- [PP_7.3.c](PP_7.3.c): find the word with most vowels.

**Chapter 8 · LR(0) Parser**

- [PP_8.1.c](PP_8.1.c): keyword validator.
- [PP_8.2.c](PP_8.2.c): count valid vs invalid identifiers.
- [PP_8.3.c](PP_8.3.c): longest/shortest valid identifier finder.

**Chapter 9 · Intermediate Code**

- [PP_9.1.c](PP_9.1.c): count prepositions.

**Chapter 10 · Control Flow Analysis**

- [PP_10.1.c](PP_10.1.c): top three most frequent words.
- [PP_10.2.c](PP_10.2.c): second-most frequent word.
- [PP_10.3.c](PP_10.3.c): longest word detector.

**Chapter 11 · Code Optimization**

- [PP_11.1.c](PP_11.1.c): count paragraphs.
- [PP_11.2.c](PP_11.2.c): detect multiple titles.

### License & Academic Use

- Source code is released under the [MIT License](LICENSE) — reuse for learning or personal projects with attribution.
- Book narrative/explanatory content is covered by [CC BY-NC 4.0](https://creativecommons.org/licenses/by-nc/4.0/).
- ⚠️ **Plagiarism warning**: do not submit these solutions as original coursework; treat them as references while crafting your own answers.

### Download the Book

Head to the **Releases** section of this repository to download the PDF edition of the Compiler Forge Handbook.
