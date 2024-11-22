import re
urls = '''https://www/google.com'
		  http://ananda.com
		  https://pesu.edu
		  https://www.isro.gov'''

pattern = re.compile(r'https?://(www\.)?(\w+)(\.\w+)')
matches=pattern.finditer(urls)
for match in matches:
	print(match.group(0))