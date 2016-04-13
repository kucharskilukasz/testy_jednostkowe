import org.junit.runner.JUnitCore;
import org.junit.runner.Result;
import org.junit.runner.notification.Failure;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class TestRunner {
    private static void createJSON(int succeedCount, int runCount){
        String fileName = "GAZORPAZORPoutput.json";
 
        try (
                BufferedWriter writer = new BufferedWriter(new FileWriter(fileName, true));
        ) {
            writer.write("[");
            writer.write(succeedCount+","+runCount);
            writer.write("]");
        } catch(IOException e) {
            System.err.println("Błąd zapisu do pliku"); 
        }
    }

    public static void main(String[] args) {
        Result result = JUnitCore.runClasses(TestOrdering.class);
        TestRunner.createJSON(result.getRunCount()-result.getFailureCount(),result.getRunCount());
    }
}