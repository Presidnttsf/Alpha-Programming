class CharCount{

  static void charCount(String str){

      int digits = 0;
      int alphabets = 0;
      int special = 0;

      for(int i=0; i<str.length(); i++){
        char ch = str.charAt(i);
        
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
          alphabets++;
        }else if((ch >= '0' && ch <= '9')){
            digits++;
        }else{
          special++;
        }


      }
    System.out.println("Alphabets: " + alphabets);
        System.out.println("Digits: " + digits);
        System.out.println("Special characters: " + special);

  }


}
