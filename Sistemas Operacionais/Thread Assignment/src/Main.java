import java.lang.*;

/* Discente: Anne livia da Fonseca Macedo
 * Descri��o da atividade valendo 2 pontos:
 * Crie uma aplica��o multi-thread em Java para iniciar, executar e dormir os threads.
 * Informe na sa�da quando a thread terminar de ser executada.
 * */

// Como est� sendo utilizado a interface runnable, n�o seria necess�rio extender a classe Thread
public class Main extends Thread {
	public static void main(String[] args) {
		// Criando as duas threads, t1 e t2
		new Thread(thread1).start();
		new Thread(thread2).start();
	}
	
	// implementando interfaces runnable
	private static Runnable thread1 = new Runnable() {
		// � necessario implementar o met�do Run()
		public void run() {
			// no caso de ocorrer alguma interrup��o na thread, ser� lan�ado uma exce��o
			// por isso � necess�rio haver um try..catch()
			try {
				for(int i = 1; i <= 10; i++) {
					System.out.println("Thread #1" + " contador: " + i);
					// Colocando a thread 1 para dormir por 1000 mili segundos
					Thread.sleep(1000);
				}
			} catch(InterruptedException e) {
				e.printStackTrace(); // met�do usado para quando houver algum erro, ele informar no console onde ocorreu o erro
			}
			// Informando que a thread 1 est� finalizada
			System.out.println("Thread #1 terminou a execu��o");
		}
	};
	
	private static Runnable thread2 = new Runnable() {
		public void run() {
			try {
				for(int i = 1; i <= 10; i++) {
					System.out.println("Thread #2" + " contador: " + i);
					// Colocando a thread 2 para dormir por 3000 mili segundos
					Thread.sleep(3000);
				}
			} catch(InterruptedException e) {
				e.printStackTrace(); // met�do usado para quando houver algum erro, ele informar onde ocorreu o erro
			}
			// Informando que a thread 2 est� finalizada
			System.out.println("Thread #2 terminou a execu��o");
		}
	};
}
