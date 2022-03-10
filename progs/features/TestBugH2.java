class TestBugH2 {
    public static void main(String[] a) {
        System.out.println(new Test().f());
    }
}

class Test {

    // If b is false, a typical while loop will never execute, returning 0.
    // If b is false, a do while will add 1 to x and return 1

    public int f() {
        boolean b;
        b = false;
        int x;
        x = 0;

        do
            x = x + 1;
        while (b);

        return x;
    }

}
