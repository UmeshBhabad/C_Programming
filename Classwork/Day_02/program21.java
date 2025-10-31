// best approach

// Use of class and object

class Marvellous                                            // Marvellous is a user defined class
{
    public void Display()                   
    {
        
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
    }
}

class program21
{
    
    public static void main(String [] args){
        
        Marvellous mobj = new Marvellous();                 // object creation
        
        mobj.Display();                                     // method call using object
           
    }
}