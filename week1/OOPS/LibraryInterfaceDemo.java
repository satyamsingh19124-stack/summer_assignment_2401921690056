interface LibraryUser{
    void registerAccount(int age);
    void requestBook(String booktype);
}
class KidUser implements LibraryUser{
    public int age;
    public String bookType;

    public void registerAccount(int age){
        if(age<12){
            this.age=age;
            System.out.println("You have successfully registered under a Kids Account");
        }
        else{
             System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    public void requestBook(String booktype){
        if(booktype.equals("Kids")){
            this.bookType=booktype;
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser{
    public int age;
    public String bookType;

    public void registerAccount(int age){
        if(age>12){
            this.age=age;
            System.out.println("You have successfully registered under an Adult Account");
        }
        else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    public void requestBook(String booktype){
        if(booktype.equals("Fiction")){
            this.bookType=booktype;
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}
public class LibraryInterfaceDemo{
    public static void main(String args[]){
        //Test Case 1:
        LibraryUser a1=new KidUser();
        a1.registerAccount(10);
        a1.registerAccount(18);
        a1.requestBook("Kids");
        a1.requestBook("Fiction");

        System.out.println();

        //Test Case 2:
        LibraryUser a2=new AdultUser();
        a2.registerAccount(5);
        a2.registerAccount(23);
        a2.requestBook("Kids");
        a2.requestBook("Fiction");
    }
}