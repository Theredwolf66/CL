function main
  vars
    a 1
    b 1
    c 1
  endvars

   %1 = 13
   a = %1
   %2 = 4
   b = %2
   %3 = a + b
   c = %3
   writei c
   %4 = '.'
   writec %4
   %5 = '\n'
   writec %5
   %6 = - a
   %7 = %6 + b
   c = %7
   writei c
   %8 = '.'
   writec %8
   %9 = '\n'
   writec %9
   %10 = - b
   %11 = a + %10
   c = %11
   writei c
   %12 = '.'
   writec %12
   %13 = '\n'
   writec %13
   %14 = 3
   %15 = a + %14
   %16 = %15 + b
   c = %16
   writei c
   %17 = '.'
   writec %17
   %18 = '\n'
   writec %18
   %19 = 3
   %20 = a - %19
   %21 = - %20
   %22 = - b
   %23 = %21 + %22
   c = %23
   writei c
   %24 = '.'
   writec %24
   %25 = '\n'
   writec %25
   return
endfunction


