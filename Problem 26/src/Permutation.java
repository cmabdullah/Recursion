
public class Permutation {
	static char[] words = { 'a', 'b', 'c' };
	static int length = words.length;
	static int counting = 0;
	
	public static void permut(int elements) {
		if (elements == 1) {
			counting++;
			// print the word
			System.out.print(words);
			System.out.println(" " + counting);
			return;
		}
		for (int i = 1; i <= elements; i++) {

			int temp = elements - 1;
			
			permut(temp);
			
			rotate(elements);
			//System.out.println("temp : " + temp + " i : " + i + " Elements : " + elements +" Words : "+ String.valueOf(words));
		}
		//System.out.println("For loop end");
	}

	public static void rotate(int elements) {
		int startingIndex = length - elements;
		char tmp = words[startingIndex];

		for (int i = startingIndex; i <= length - 2; i++) {
			words[i] = words[i + 1];
		}
		words[length - 1] = tmp;
	}
	public static void main(String[] args) {
		permut(words.length);
	}

}
