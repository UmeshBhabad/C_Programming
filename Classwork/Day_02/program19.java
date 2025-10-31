// good approach

// Using instance method in static area without object creation

class program19
{    
    public void Display()                   //error
    {
        
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
    }
    
    public static void main(String [] args){
        
        Display();
           
    }
}