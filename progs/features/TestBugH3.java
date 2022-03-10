class TestBugH3 {
    public static void main(String[] a) {
        System.out.println(new Test().f());
    }
}

class Test {

    // if it terminates on true, then it will be an infinite loop as x is always
    // true. Otherwise, it will terminate and return y, which is 0;

    public int f() {
        boolean x;
        x = true;

        int y;
        y = 0;

        do {
            y = y + 1;
        } while (x);

        return y;
    }

}
