import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;

public class Main {

    public static class Iris {
        private final double sepalLength;
        private final double sepalWidth;
        private final double petalLength;
        private final double petalWidth;
        private final String species;

        public Iris(double sepalLength, double sepalWidth, double petalLength, double petalWidth, String species) {
            this.sepalLength = sepalLength;
            this.sepalWidth = sepalWidth;
            this.petalLength = petalLength;
            this.petalWidth = petalWidth;
            this.species = species;
        }

        public double getSepalLength() {
            return sepalLength;
        }

        public double getSepalWidth() {
            return sepalWidth;
        }

        public double getPetalLength() {
            return petalLength;
        }

        public double getPetalWidth() {
            return petalWidth;
        }

        public String getSpecies() {
            return species;
        }

        public double[] getDoubleValues() {
            return new double[] {sepalLength, sepalWidth, petalLength, petalWidth};
        }
    }

    public static void main(String[] args) {
        String csvFile = "iris.csv";
        String line = "";
        String csvDelimiter = ",";
        Iris[] irisArray = new Iris[150];
        int index = 0;

        try (BufferedReader br = new BufferedReader(new FileReader(csvFile))) {
            while ((line = br.readLine()) != null) {
                String[] values = line.split(csvDelimiter);
                double sepalLength = Double.parseDouble(values[0]);
                double sepalWidth = Double.parseDouble(values[1]);
                double petalLength = Double.parseDouble(values[2]);
                double petalWidth = Double.parseDouble(values[3]);
                String species = values[4];
                Iris iris = new Iris(sepalLength, sepalWidth, petalLength, petalWidth, species);
                irisArray[index++] = iris;
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Compute minimum, maximum, average, and standard deviation of each column
        double[] columnMin = new double[4];
        double[] columnMax = new double[4];
        double[] columnSum = new double[4];
        double[] columnSumSquares = new double[4];
        Arrays.fill(columnMin, Double.MAX_VALUE);
        Arrays.fill(columnMax, Double.MIN_VALUE);

        for (Iris iris : irisArray) {
            double[] values = iris.getDoubleValues();
            for (int i = 0; i < 4; i++) {
                if (values[i] < columnMin[i]) {
                    columnMin[i] = values[i];
                }
                if (values[i] > columnMax[i]) {
                    columnMax[i] = values[i];
                }
                columnSum[i] += values[i];
                columnSumSquares[i] += values[i] * values[i];
            }
        }

        double[] columnAvg = new double[4];
        double[] columnStdDev = new double[4];
        for (int i = 0; i < 4; i++) {
            columnAvg[i] = columnSum[i] / 150.0;
            columnStdDev[i] = Math.sqrt((columnSumSquares[i] - (columnSum[i] * columnSum[i]) / 150.0) / 149.0);
        }

        // Print results
        System.out.println("Minimum values: " + Arrays.toString(columnMin));
        System.out.println("Maximum values: " + Arrays.toString(columnMax));
        System.out.println("Average values: " + Arrays.toString(columnAvg));
        System.out.println("Standard deviation values: " + Arrays.toString(columnStdDev));
    }
}
