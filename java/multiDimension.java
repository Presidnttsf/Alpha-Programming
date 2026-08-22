import java.util.*;

public class Main {

    public static void pt(Object value) {
        System.out.println(value);
    }

    public static void main(String[] args) {

        int[] numbers = new int[]{10, 20, 30, 40, 50};

        int[][] numMulti = new int[][]{{10, 20, 30}, {40, 50}};

        String[][] multiStr = new String[][]{
            {"row"},
            {"col", "col1", "col2"},
            {"colO", "col01", "col02"}
        };

        // for (int i = 0; i < multiStr.length; i++) {
        //     String[] ele = multiStr[i];

        //     for (int j = 0; j < ele.length; j++) {
        //         pt(i + " " + multiStr[i][j]);
        //     }
        // }

        String[][][] threeDim = new String[][][]{
            {
                {"row"},
                {"tsf", "sameer", "ahmed"}
            },
            {
                {"col", "col1"},
                {"col001", "col002"},
                {"col2"}
            },
            {
                {"colO"},
                {"col0001", "col00002"},
                {"col01", "col02"}
            }
        };

        for (int i = 0; i < threeDim.length; i++) {
            String[][] ele = threeDim[i];

            for (int j = 0; j < ele.length; j++) {
                String[] ele2 = threeDim[i][j];

                for (int k = 0; k < ele2.length; k++) {
                    pt(i + " " + j + " "+ k +" " + threeDim[i][j][k]);
                }
            }
        }
    }
}
