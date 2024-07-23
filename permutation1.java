public class permutation1 {

    public static void mazePath(int[][] mat, int i, int j, String op, boolean[][] visited) {
        if (i == mat.length - 1 && j == mat[0].length - 1) {
            System.out.println(op);
            return;
        }

        if (i >= mat.length || j >= mat[0].length || i < 0 || j < 0 || mat[i][j] == 1) {
            
            return;
        }
        if (visited[i][j]) {
            return;
        }
        visited[i][j] = true;
        mazePath(mat, i - 1, j, op + "U", visited);
        mazePath(mat, i, j + 1, op + "R", visited);
        mazePath(mat, i + 1, j, op + "D", visited);
        mazePath(mat, i, j - 1, op + "L", visited);
        visited[i][j] = false;
    }

    public static void main(String[] args) {

        int[][] mat = { { 0, 1, 0, 0 }, { 0, 0, 0, 0 }, { 0, 1, 0, 0 }, { 0, 1, 1, 0 } };
        boolean[][] visited = new boolean[mat.length][mat[0].length];

        mazePath(mat, 0, 0, "", visited);

    }
}
