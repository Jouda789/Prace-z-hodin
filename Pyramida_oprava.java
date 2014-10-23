/* Nakresli (krasnou) pyramidu. */
public class Pyramida_oprava {
	public static void main(String[] args) {
		int vyska = Integer.parseInt(args[0]);
		
		for (int y = 0; y < vyska; y++) {
			for (int x = 0; x < y + 1; x++) {
				System.out.printf("-");
			}
			System.out.println();
		}
	}
}