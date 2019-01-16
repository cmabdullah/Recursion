
public class StringReverse {

	public static void main(String[] args) {
		String str = "ASDFG";
		String reverse = reverseRecurs(str);
		System.out.println(reverse);

	}

	private static String reverseRecurs(String str) {
		if (str.length() <2){
			return "Error";
		}
		else {
			String s1 = str.substring(1);
			char s2 = str.charAt(0);
			return s1+s2;
		}
	}

}
