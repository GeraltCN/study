public class Papi{
    int puppyAge;
    public Papi(String name){                       //构造器
        System.out.println("His name is :" + name);
    }
    public void setAge(int age ){
        puppyAge = age;
    }

    public int getAge(){
        System.out.println("Papi's age is :" + puppyAge);
        return puppyAge;
    }

    public static void main(String []args){
        Papi myPapi = new Papi("goodBoy");
        myPapi.setAge(2);
        myPapi.getAge();
        System.out.println("Variable Value :" + myPapi.puppyAge);
    }
}
s
