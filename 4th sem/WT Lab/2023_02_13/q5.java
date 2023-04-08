public class q5 {
    public static void main(String[] args){
        int len =3;
        int mat1[][]= new int [len][len];
        int mat2[][]= new int [len][len];

        int add[][] = new int [len][len];
        int mult[][] = new int[len][len];

        for (int i = 0; i < len; i++){
            for (int j = 0; j < len; j++){
                mat1[i][j] = (int)(Math.random()*10);
                mat2[i][j] = (int)(Math.random()*10);
            }
        }

        System.out.println("Matrix 1: ");
        for (int i = 0; i < len; i++){
            for (int j = 0; j < len; j++){
                System.out.print(mat1[i][j]+" ");
            }
            System.out.println();
        }

        System.out.println("Matrix 2: ");
        for (int i = 0; i < len; i++){
            for (int j = 0; j < len; j++){
                System.out.print(mat2[i][j]+" ");
            }
            System.out.println();
        }

        for (int i = 0; i < len; i++){
            for (int j = 0; j < 3; j ++)
                add[i][j] = mat1[i][j] + mat2[i][j];
        }

        for (int i = 0; i < len; i++){
            for (int j = 0; j < len; j++){
                mult[i][j] = 0;
                for (int k = 0; k < len; k++){
                    mult[i][j] += mat1[i][k]*mat2[k][j];
                }
            }
        }
        
        System.out.println("Addition of matrices: ");
        for (int i = 0; i < len; i++){
            for (int j = 0; j < len; j++){
                System.out.print(add[i][j]+" ");
            }
            System.out.println();
        }

        System.out.println("Multiplication of matrices: ");
        for (int i = 0; i < len; i++){
            for (int j = 0; j < len; j++){
                System.out.print(mult[i][j]+" ");
            }
            System.out.println();
        }
    }
}
