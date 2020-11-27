import java.util.*;
class Watermelon_4A
{
	public static void main(String[] args)
	{
		int w;

		Scanner scanner = new Scanner(System.in);
		w = Integer.parseInt(scanner.nextLine());
		if(w%2 != 0 || w == 2)
			System.out.println("NO");
		else
			System.out.println("YES");

	}
}