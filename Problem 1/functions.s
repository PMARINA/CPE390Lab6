.global _Z1fv

@ Have _Z1fv call x, which calls y
@ In f, move 1 to r0 before doing anything
@ call x, in which you move 2 into r0
@ From x, call y, in which you move #123 into r1.

@ You are not allowed to call:
@ <Branch Instructions> x,_Z1fv @ from y
@ <Branch Instructions> _Z1fv @ from x


_Z1fv:
  mov R0, #1
  @ Call function x
  add R0, R1, R0
  bx lr

x:
  @ call function y

y:
  @ stuff
  mov r1, #123
  bx lr