import java.util.Properties;

public class NativeCallsClass
{
    static
    {

        Properties properties = System.getProperties();
        System.out.println(properties);
        System.load(properties.getProperty("user.dir")+"/libNativeCallsClass.so");
    }

    native public static void printOne();
    native public static void printTwo();
}