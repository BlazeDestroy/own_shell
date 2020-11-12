# own_shell
This task involves writing your own simplified shell shell to call simple Linux console commands without arguments. 

This code is not aimed at writing your own algorithms for outputting the command result, but is intended to help you understand how programs written in C work when they are run in Linux, and also shows a way how you can write your own commands if you suddenly decide to write your own ones.  

This code works and accepts the commands shown in the listing until you write 'exit'.

If you want to see the result of the work, you need to do the following on your Linux (or Linux remote console):

 1) Create a file using Nano GUI by 'nano own_shell.c' (or any name you like)
 2) Paste the code from this repository contained in the file "ex1_fork.c" into your created file.
 3) Save the file using Linux tools and hotkeys (I'm sure you know how to do this)
 4) Compile your file by 'gcc own_shell.c -o shell' command
 5) Run the compiled file 'shell' by using './shell'
 
Try using commands like 'pwd, ls, help' as well as any simple commands which are included in code and which can be included in it by yourself.
