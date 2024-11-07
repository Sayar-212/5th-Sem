import java.util.*;
class TooHot extends Exception {
    public TooHot(String message) {
        super(message);
    }
}
class TooCold extends Exception {
    public TooCold(String message) {
        super(message);
    }
}
public class TemperatureChecker {
    public static void checkTemperature(int temperature) throws TooHot, TooCold {
        if (temperature > 40) {
            throw new TooHot("Temperature is too hot!");
        } else if (temperature < 20) {
            throw new TooCold("Temperature is too cold!");
        } else {
            System.out.println("Temperature is comfortable: " + temperature + " degrees.");
        }
    }
    public static void main(String[] args) {
        int[] testTemperatures = {15, 25, 45};  

        for (int temp : testTemperatures) {
            try {
                System.out.println("Checking temperature: " + temp + " degrees");
                checkTemperature(temp);
            } catch (TooHot e) {
                System.out.println(e.getMessage());
            } catch (TooCold e) {
                System.out.println(e.getMessage());
            }
        }
    }
}
