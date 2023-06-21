/*Write a program in java to create a package calculator having a class calculation. The calculation
class contains all operations related to calculator like add(), sub(), mul(), div() etc. Now create another
package called Test having a class Test_calculator. Import the package calculator. Now create an
object of calculation class in Test_calculator class and call all the calculator functions. */

package calculator;
public class calculation
{
    public int add(int a, int b){
        return a+b;
    }
    public int sub(int a, int b){
        return a-b;
    }
    public int mul(int a, int b){
        return a*b;
    }
    public int div(int a, int b){
        return a/b;
    }
}

package Test;
import calculator.calculation;
public class Test_calculator
{
    public static void main(String[] args)
    {
        calculation c = new calculation();
        System.out.println(c.add(2,3));
        System.out.println(c.sub(2,3));
        System.out.println(c.mul(2,3));
        System.out.println(c.div(2,3));
    }
}

