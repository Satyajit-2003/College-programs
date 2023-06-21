from bs4 import BeautifulSoup
import requests

for i in range(59, 92):
    url = "http://odisha-10th-result.indiaresults.com/or/bse-orissa/hsc-class-10-exam-result-2023/result.asp"

    payload = f"rollno=127AF00{i}"
    headers = {
    "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7",
    "Accept-Language": "en-US,en;q=0.9",
    "Cache-Control": "max-age=0",
    "Connection": "keep-alive",
    "Content-Type": "application/x-www-form-urlencoded",
    "Cookie": "_gid=GA1.2.1726847179.1684390598; _gat_UA-78953540-2=1; _gat_gtag_UA_78953540_2=1; ASPSESSIONIDQSATCATQ=AKGMJNMCPAFNLGMEJIIBIFGL; _ga=GA1.2.2104680385.1684390598; _ga_V0SP03ST3Y=GS1.1.1684390597.1.1.1684390633.24.0.0",
    "DNT": "1",
    "Origin": "http://odisha-10th-result.indiaresults.com",
    "Referer": "http://odisha-10th-result.indiaresults.com/or/bse-orissa/hsc-class-10-exam-result-2023/query.htm",
    "Upgrade-Insecure-Requests": "1",
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36"
}
    response = requests.request("POST", url, data=payload, headers=headers)

    html = response.text 

    soup = BeautifulSoup(html, 'html.parser')

    # Extract Personal Details
    personal_details_table = soup.find('table', class_='table-bordered')
    rows = personal_details_table.find_all('tr')

    personal_details = {}
    for row in rows:
        cells = row.find_all('td')
        key = cells[0].text.strip()
        value = cells[1].text.strip()
        personal_details[key] = value

    print('Personal Details:')
    print(personal_details)

    # Extract Marks Awarded
    marks_table = soup.find('table', class_='table-bordered', id='tr1').find_next_sibling('table')
    rows = marks_table.find_all('tr')

    marks_awarded = []
    for row in rows[1:]:
        cells = row.find_all('td')
        subject_code = cells[0].text.strip()
        subject_name = cells[1].text.strip()
        max_marks = cells[2].text.strip()
        marks_secured = cells[3].text.strip()

        marks_awarded.append({
            'Subject Code': subject_code,
            'Subject Name': subject_name,
            'Maximum Marks': max_marks,
            'Marks Secured': marks_secured
        })

    print('Marks Awarded:')
    print(marks_awarded)
