### Programs and Output for Experiment 8.

[infix_postfix.c](https://github.com/akkupy/DS_S3/blob/main/Exp_8/infix_postfix.c) - Infix to Postfix Conversion Using Stack
```
Enter the Expression : A*B+C/D^2

 Token: A        stack :         postfix : A
 Token: *        stack : *       postfix : A
 Token: B        stack : *       postfix : A B
 Token: +        stack : +       postfix : A B *
 Token: C        stack : +       postfix : A B * C
 Token: /        stack : + /     postfix : A B * C
 Token: D        stack : + /     postfix : A B * C D
 Token: ^        stack : + / ^   postfix : A B * C D
 Token: 2        stack : + / ^   postfix : A B * C D 2 
 Postfix: AB*CD2^/+
```  