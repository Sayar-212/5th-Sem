class MaxValueRunnable implements Runnable {
    private int[] numbers;

    public MaxValueRunnable(int[] numbers) {
        this.numbers = numbers;
    }

    @Override
    public void run() {
        int max = numbers[0];
        for (int num : numbers) {
            if (num > max) {
                max = num;
            }
        }
        System.out.println("Maximum value (Runnable interface): " + max);
    }
}

public class MaxValueByRunnable {
    public static void main(String[] args) {
        int[] numbers = {15, 22, 8, 19, 30};
        Thread maxThread = new Thread(new MaxValueRunnable(numbers));
        maxThread.start();
        System.out.println("Main thread is running...");
    }
}
