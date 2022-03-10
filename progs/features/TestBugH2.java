class TestBugH2 {
    public static void main(String[] a) {
        System.out.println(new Test().f());
    }
}

class Test {

    // Iif it check the condition before the execution of the loop, it will output
    // 10. If the condition is checked after, it will be 9.
    public int f() {
        int x;
        x = 10;

        do
            x = x - 1;
        while (x > 10);

        return x;
    }

}
