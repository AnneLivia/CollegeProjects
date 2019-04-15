import java.lang.*;

/* Discente: Anne livia da Fonseca Macedo
 * Descrição da atividade valendo 2 pontos:
 * Crie uma aplicação multi-thread em Java para iniciar, executar e dormir os threads.
 * Informe na saída quando a thread terminar de ser executada.
 * */

// Como está sendo utilizado a interface runnable, não seria necessário extender a classe Thread
public class Main extends Thread {
	public static void main(String[] args) {
		// Criando as duas threads, t1 e t2
		new Thread(thread1).start();
		new Thread(thread2).start();
	}
	
	// implementando interfaces runnable
	private static Runnable thread1 = new Runnable() {
		// é necessario implementar o metódo Run()
		public void run() {
			// no caso de ocorrer alguma interrupção na thread, será lançado uma exceção
			// por isso é necessário haver um try..catch()
			try {
				for(int i = 1; i <= 10; i++) {
					System.out.println("Thread #1" + " contador: " + i);
					// Colocando a thread 1 para dormir por 1000 mili segundos
					Thread.sleep(1000);
				}
			} catch(InterruptedException e) {
				e.printStackTrace(); // metódo usado para quando houver algum erro, ele informar no console onde ocorreu o erro
			}
			// Informando que a thread 1 está finalizada
			System.out.println("Thread #1 terminou a execução");
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
				e.printStackTrace(); // metódo usado para quando houver algum erro, ele informar onde ocorreu o erro
			}
			// Informando que a thread 2 está finalizada
			System.out.println("Thread #2 terminou a execução");
		}
	};
}
