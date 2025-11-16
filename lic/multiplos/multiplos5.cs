using System;

namespace LIC {
	class Program {
		public static void Main(){
			int m = 0;
			Console.WriteLine("Multiplos de 5 entre 0 y 30");
			do {
				Console.WriteLine(m);
				m+=5;
			} while(m<=30);
		}
	}
}
