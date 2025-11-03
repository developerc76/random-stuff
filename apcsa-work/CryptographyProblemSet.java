/**
 * This program gathers user input and displays encrypted text using the ceasar cipher and the 
 * Vigenere Cipher, and Simulates the BB84 Protocol showing where an intruder has intercepted
 * the secret message.  
 * @author Jasraj Bhatia
 * 10/29/2025
 */
package cipher;

import java.util.Scanner;
import java.security.SecureRandom;


public class CryptographyProblemSet {

    public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      while (true) {
    	  System.out.print("Caesar (1), Vigenere (2), Vernam (3), Quit (4): ");
	      int choice = scan.nextInt(); 
	      switch(choice) {
		      case 1: 
		    	  caesarCipher(); break; 
		      case 2: 
		    	  vigenereCipher(); break;
		      case 3: 
		    	  vernamCipher(); break;
		      case 4: 
		    	  System.exit(0); 
		      default:
		    	  System.out.println("Invalid Input"); break;
	      }
      }
    }
    
    
    
    /*  Prompts the user to enter plaintext, and a shift key
    and displays the ciphertext using the caesar cipher */
    public static void caesarCipher(){
       Scanner sc = new Scanner(System.in);
       System.out.print("Unencrypted message: ");
       String message = sc.nextLine(); 
       System.out.print("Shift Key: ");
       int key = (sc.nextInt()); 
       key %= 26;
       System.out.print("Encrypted: ");
       String nstr = "";
       for (int i = 0; i < message.length(); i++) {
    	   // ASCII Upper = 65-90
    	   // ASCII Lower = 97-122
    	   char n = message.charAt(i);
    	   int m = (int)n; 
    	   if (65 <= m && m <= 90) 
    		   nstr += (char)((m - 65 + key)%26 + 65);
    	   else if (97 <= m && m <= 122)
    		   nstr += (char)((m - 97 + key)%26 + 97); 
    	   else
    		   nstr += (char)n; 
       }
       
       System.out.println(nstr); 
    }
    
    
    /* Prompts the user to enter plaintext and a word key and
     * displays the ciphertext using the Vigenere Cipher
     */
    
    public static void vigenereCipher() {
        Scanner sc = new Scanner(System.in); 
        System.out.print("Plaintext: ");
        String plaintext = sc.nextLine(); 
        System.out.print("Key: ");
        String key = sc.next().toLowerCase(); 
        int c = 0; // index of letter that gets assigned
        String encrypted = ""; 
        for (int i = 0; i < plaintext.length(); i++) {
        	c %= key.length(); 
        	char cur = plaintext.charAt(i); 
        	int m = (int)cur; 
        	int k = (int)key.charAt(c);
        	// ASCII Upper = 65-90
     	    // ASCII Lower = 97-122
     	   	if (65 <= m && m <= 90) {
     	   		encrypted += (char)(((m + k - 65 - 97)%26) + 65);
     	   	} else if (97 <= m && m <= 122) {
     	   		encrypted += (char)(((m + k - 97 - 97)%26) + 97);
     	   	} else {
     		   encrypted += (char)cur; c--; 
     	   }
     	   c++; 
        }
        System.out.println("Encrypted: " + encrypted); 
    }
    
    
    /*
    Prompts the user to enter plaintext, displays the plaintext in binary, 
    displays the randomly generated binary key, and displays  the encrypted ciphertext
    in binary form.  
    */
    public static void vernamCipher() {
    	// new SecureRandom instance to use nextInt() function to 
    	// securely generate a pseudorandom number
    	SecureRandom secureRandom = new SecureRandom();
        Scanner sc = new Scanner(System.in);
        System.out.print("Plaintext: ");
        String plaintext = sc.nextLine(); 
        // Convert plaintext to Binary
        String binaryString = ""; 
        for (int i = 0; i < plaintext.length(); i++) {
        	int asciiValue = plaintext.charAt(i); 
        	binaryString += String.format("%8s", Integer.toBinaryString(asciiValue)).replace(' ', '0');
        }
        System.out.println("Plaintext (Binary): " + binaryString); 
        String key = ""; 
        // Generate key
        for (int i = 0; i < binaryString.length(); i++) {
        	double randomInt = secureRandom.nextInt();
        	key += (randomInt > 0.5) ? '1' : '0';
        }
        System.out.println("Random Key: " + key); 
        String encrypted = ""; 
        // XOR in for loop
        for (int i = 0; i < binaryString.length(); i++) {
        	if (binaryString.charAt(i) == key.charAt(i)) {
        		encrypted += '0'; 
        	} else {
        		encrypted += '1'; 
        	}
        }
        System.out.println("Encrypted Output: " + encrypted); 
    }

}
