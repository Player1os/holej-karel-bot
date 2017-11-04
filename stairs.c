    #include "./karel.h"


    void turnRight() {
            
    }

    int main(){
        turnOn("stairs.kw");

        // your code goes here
        
        // turnLeft();

        // loop(4) movek();

        setStepDelay(50);
        
       loop(9000) {
            movek();
            turnLeft();

            // if (noBeepersPresent()) {
            putBeeper();
            // }
            
        }
        

        turnOff();
        return 0;
    }
