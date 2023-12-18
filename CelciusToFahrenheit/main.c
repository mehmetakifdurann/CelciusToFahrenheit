// This program calculates the Fahrenheit degree of the given Celcius degree.
// Created by Mehmet Akif Duran

#include <stdio.h>

float CelciusToFahrenheit(float celcius){
    
    float fahreDegree;
    
    // The formula for translation is = Fahrenheit(F) = [Celcius(C) * 1.8 ] + 32
    
    fahreDegree = (celcius * 1.8) + 32;
    
    return fahreDegree;
}

int main(){ // Beginning of the main

   // Variable decleration(s)
        float celcius;
    
   // Executable statement(s)
        
        // Explaning the program to the user.
    
    printf("Hi, welcome to CelciusToFahrenheit. This program calculates the Fahrenheit degree of the Celcius degree that you want. \n");
   
        // Getting inputs.
    
    printf("Enter the celcius degree: \n");
        scanf("%f", &celcius);
    printf("------------------\n");
    
            // Calling the function, printing the result.
    printf("The Fahrenheit degree of this %f is = %.2f Fahrenheit. \n", celcius, CelciusToFahrenheit(celcius));

    
    
    
    return 0;
}  // End of the main function.
