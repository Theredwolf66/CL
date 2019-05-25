func f(a : int, b : int) : bool
    var x : int
    x = a;
    return x == x;
endfunc


func main()
    var p : array [10] of int
    var l : array [1] of bool
    var x,z : int

    var y : bool
    y = f(x,5+8);
    f(3+4,2+1-5);
    
endfunc
