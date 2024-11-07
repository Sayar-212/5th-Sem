class MaxValueThread extends Thread {
    private int[] numbers;
    private int max;

    public MaxValueThread(int[] numbers) {
        this.numbers = numbers;
    }

    @Override
    public void run() {
        max = numbers[0];
        for (int num : numbers) {
            if (num > max) {
                max = num;
            }
        }
        System.out.println("Maximum value (Thread class): " + max);
    }
}

public class MaxValueByThread {
    public static void main(String[] args) {
        int[] numbers = {15, 22, 8, 19, 30};
        MaxValueThread maxThread = new MaxValueThread(numbers);
        maxThread.start();
        System.out.println("Main thread is running...");
    }
}
