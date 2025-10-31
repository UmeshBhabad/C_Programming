// best approach

// Using method in a class to display "Jay Ganesh" four times

class Marvellous
{
    public void Display()                   
    {
        int iCnt = 0;                                               // Local variable

        for(iCnt = 1; iCnt <= 4; iCnt++)                            // Iteration
        {
            System.out.println("Jay Ganesh...");                    // Body
        }
        
    }
}

class program24
{    
    public static void main(String [] args){
        
        Marvellous mobj=new Marvellous();                           // Object creation
        
        mobj.Display();                                             // Method call
           
    }
}