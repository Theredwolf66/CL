function f
  params
    _result
    a
    b
  endparams

  vars
    x 1
    y 1
    z 10
  endvars

     %1 = 67
     %2 = a + %1
     z[9] = %2
     %3 = 34
     x = %3
     %4 = 56
     %5 = z[9]
     %6 = %4 + %5
     z[3] = %6
     %7 = z[3]
     %8 = x < %7
     ifFalse %8 goto else1
     %9 = 78
     x = %9
     writef b
     writeln
     goto endif1
  label else1 :
     %11 = 99
     x = %11
  label endif1 :
     %12 = z[3]
     writei %12
     writeln
     %14 = 1
     _result = %14
     return
endfunction

function fz
  params
    r
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
     return
endfunction

function main
  vars
    a 1
  endvars

     pushparam 
     %1 = 3
     pushparam %1
     %2 = 2
     %3 = float %2
     pushparam %3
     call f
     popparam 
     popparam 
     popparam %4
     ifFalse %4 goto endif1
     %5 = 3.7
     %7 = float a
     %6 = %7 +. %5
     %8 = 4
     %10 = float %8
     %9 = %6 +. %10
     writef %9
     writeln
  label endif1 :
     return
endfunction


