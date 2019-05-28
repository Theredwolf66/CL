function f
  params
    a
  endparams

   %1 = 5
   %3 = 5
   %4 = a
   %2 = %4[%3]
   %5 = 10
   %7 = float %5
   %6 = %2 *. %7
   a[%1] = %6
   return
endfunction

function main
  vars
    b 10
    c 10
  endvars

   %1 = 5
   readf %2
   b[%1] = %2
   %3 = 7
   %4 = 5
   %5 = 5
   %6 = b[%5]
   c[%3] = %6
   %8 = 5
   %7 = b[%8]
   writef %7
   writeln
   %11 = 7
   %10 = c[%11]
   writef %10
   writeln
   %13 = &b
   pushparam %13
   call f
   popparam 
   %15 = 5
   %14 = b[%15]
   writef %14
   writeln
   %18 = 7
   %17 = c[%18]
   writef %17
   writeln
   return
endfunction


