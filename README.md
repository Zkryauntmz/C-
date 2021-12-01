# Project Work

Your project is about passwords. In the project folder there is "10-million-password-list-top" folder which consist of top 100, 1.000, 10.000, 100.000 and 1.000.000 password lists.

## Objectives of a program:

 - [Search] Your program must allow searching for any given password in the 100,000 password list and return if the given password is in the list or not. 
 - [Sort] Find an appropriate sorting algorithm and sort the 10.000 password list ascending and descending order. Show top 10 elements in both order.
 - [Hash] Insert 1.000 password list in to hash table with appropriate hash function. It would be better if the number of collusion does not exceed 200. Search a password within 1.000 password list using Hash Table and report collusion count for that search.
 - [Linked List] Create a linked list (singly, doubly or circular it's up to you.) from 1.000 password list. According to password lenght and difference of every character, give every password a score(it's up to you!) and store these scores in the same linked list. Your node structure must contain score for every node. Sort the list according to the password strenght and output top 10 strongest and top 10 most weakest passwords.

## Report of a Project Work

- Write a single page project report and include in your Project as a pdf.  
- Name it like [number-name-surname]-report.pdf.  
- Briefly explain every objectives and things you have done. Mention memory efficiency of your program. 
- Project report is about our lesson not about passwords. Do not write "weak password is 12345" but write "merge sort is better with smaller..."
- Do not include a screenshot in your report. 

## Screenshots and Executable file

Include your *working* compiled binary file. If you did not include executable file, i may not be able to compile your code because of the warnings or errors. I am not using Visual Studio or any other IDE. I am using direct GCC without any parameter which means I am not surpassing any warnings. Don't let me compile your code compile it yourself according to your needs.
Put screenshots of every objectives under screenshot folder with their names like: Search.png, Hash.png etc.

## 1Million Password List

1 million password file is there for you to try your code on bigger data. If you complete every objective and want to have some fun kindly work with 1M password list and see the limitations of your code.

## Warnings

- Any objectives shouldn't take more than 5 seconds, be realistic about it. 
- Visual Studio user please submit release x86 builds. If you cant, compile with other compilers.
- Do not change any txt file.
- Try to resolve situations your program may encounter.
- Your code must not give any errors or shutdown unexpectedly.
- Try to cover all objectives as much as possible.
- In order to get higher grades submit a working program even though it cannot accomplish all the objectives.

## Similarities

More than 50 percent similarity will be treated as plagiarism. I do not give any code beforehand. You will write every part of your code by yourself that's why more than %50 percent similarity is unacceptable.

### Example Submission Folder Structure

```
│   2019911001-Abbas-Elmas-report.pdf
│   main.c
│   main.exe
│   README.MD
│
├───10-million-password-list-top
│       100.txt
│       1000.txt
│       10000.txt
│       100000.txt
│       1000000.txt
│
└───screenshots
        Sort.png
        Search.png
        Hash.png
        Linked List.png
```