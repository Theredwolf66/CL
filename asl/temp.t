function f
  params
    _result
    a
    f
  endparams

  vars
    x 1
    b 1
    z 10
  endvars

     %1 = 5
     readi z
     %3 = 5
     %2 = z[%3]
     %4 = 88
     %5 = %2 + %4
     writei %5
     readi b
     readf f
     ifFalse b goto endif1
     %6 = 'h'
     writec %6
     writeln
     %6 = '\t'
     writec %6
     %6 = 'l'
     writec %6
     %6 = '\\'
     writec %6
     %6 = 'a'
     writec %6
     %7 = -. f
     %8 = -. %7
     %9 = -. %8
     writef %9
     writeln
  label endif1 :
     %11 = 1
     _result = %11
     return
endfunction

function fz
  params
    _result
    r
    u
  endparams

  label startWhile1 :
     %1 = 0
     %2 = %1 < r
  label while1 :
     ifFalse %2 goto endwhile1
     %3 = 1
     %4 = r - %3
     r = %4
     goto startWhile1
  label endwhile1 :
     %5 = 0
     %6 = r == %5
     ifFalse %6 goto endif1
     pushparam 
     %7 = 55555
     pushparam %7
     %8 = 1
     %9 = 4
     %10 = %8 / %9
     %11 = float %10
     pushparam %11
     call f
     popparam 
     popparam 
     popparam 
  label endif1 :
     %12 = 3
     %13 = r + %12
     %15 = float %13
     %14 = %15 *. u
     _result = %14
     return
endfunction

function main
  vars
    a 1
    q 1
  endvars

   %1 = 0
   %2 = float %1
   q = %2
   pushparam 
   %3 = 3
   %4 = 4
   %5 = %3 + %4
   pushparam %5
   pushparam 
   %6 = 4444
   pushparam %6
   %7 = 2
   %9 = float %7
   %8 = q +. %9
   pushparam %8
   call fz
   popparam 
   popparam 
   popparam %10
   pushparam %10
   call fz
   popparam 
   popparam 
   popparam %11
   q = %11
   %12 = 3.7
   %13 = q +. %12
   %14 = 4
   %16 = float %14
   %15 = %13 +. %16
   writef %15
   writeln
   return
endfunction


