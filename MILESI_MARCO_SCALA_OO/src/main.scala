import Math.pow

object main {

  // Numero massimo di iterazione da computare
  val iterazioni = 100;

  def main(args: Array[String]): Unit = {

    // y = 5x + 3 : -0.6
    var Retta = new Func(List(5, 3));

    // y = 1*x^2-2*x^0 : 1.44
    var Parabola = new Func(List(1, 0, -2));

    // y = 2 x^3 - 2 x^0 : 1
    var Cubica = new Func(List(2, 0, 0, -2));
    
    // y = 2 x^3 - 1 x^0 : 0.79
    var Cubica2 = new Func(List(2, 0, 0, -1));

    var Bisection = new Bisection();
    
    println( Bisection.Valuta(Retta)(2)(-2)(iterazioni) );
         
		println( Bisection.Valuta(Parabola)(2)(-2)(iterazioni) );
		println( Bisection.ValutaToString(Parabola)(2)(-2)(iterazioni) );
		
		println( Bisection.Valuta(Cubica)(2)(-2)(iterazioni) );
		println( Bisection.Valuta(Cubica2)(2)(-2)(iterazioni) );
  }
}

class Func(var l: List[Double]) {
  
  var params = l;
  
  // Valutatore di funzione in un punto x: Double
  def ValutaFunc(x: Double) = {
    var r: Double = 0;
    
    for(i <- 0 until this.params.size) {
      r += (this.params.apply(i) * pow(x, this.params.size - i - 1));
    }
    
    r;
  }
}

class Bisection() {
  
  // Precision per la funzione ToString
  val precision = 5;
  
  def Valuta(f: Func)(s: Double)(e: Double)(iterazioni: Int): Double = {

    var root = (s + e) / 2;
    var valore: Double = f.ValutaFunc( root );
    if (valore == 0 || iterazioni == 0) {
      root;
    } else {
  
      if (valore > 0) {
        if (s < e) {
          this.Valuta(f)(s)(root)(iterazioni - 1);
        } else {
          this.Valuta(f)(root)(e)(iterazioni - 1);
        }
      } else {
        if (s < e) {
          this.Valuta(f)(root)(e)(iterazioni - 1);
        } else {
          this.Valuta(f)(s)(root)(iterazioni - 1);
        }
      }
    }
  }
  
  def ValutaToString(f: Func)(s: Double)(e: Double)(iterazioni: Int): String = {
    String.valueOf(this.Valuta(f)(s)(e)(iterazioni)).slice(0,precision);
  }
}