package programação;

public class ArraysMultidimencionais{
    public static void main(String[] args)
    {
      int[][] tabela = new int[5][5];
      tabela[0][0] = 1;
      System.out.println("Na posição 0 a tabela possui "+tabela[0].length+" dimensões\n");
      for(int i = 0; i < 5; i++)
      {
          for(int j = 0; j < 5; j++)
          {
               System.out.printf("X[%d][%d] = %d\n",i,j,tabela[i][j]);
          }
      }
          
    } 
    
}