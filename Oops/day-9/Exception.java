class TooLow extends Exception {
    private String detail;
    
    TooLow(String a) {
        detail = a;
    }
    
    public String toString() {
        return "TooLow[" + detail + "]";
    }
}

class checker {
    static int counter = 0;
    
    void checkInput() throws NullPointerException, TooLow {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no: ");
        int x = sc.nextInt();
        
        if (x == 0) throw new NullPointerException("not zero");
        if (x < 10) throw new TooLow("greater than 10 please");
        
        counter = 1;
        System.out.println("That's my favourite number!");
    }
    
    public static void main(String args[]) {
        checker ch = new checker();
        
        do {
            try {
                ch.checkInput();
            } catch (NullPointerException e) {
                System.out.println(e);
            } catch (TooLow e) {
                System.out.println("Caught " + e);
            }
        } while (checker.counter == 0);
    }
}
