import requests #sending request to use api for different websites
from pprint import pprint #converts the json format


API_Key='d4aeea258d098a71ea78aae19932303d'

city=input("Enter a city:\n")

base_url="https://api.openweathermap.org/data/2.5/weather?appid="+API_Key+"&q="+city
weather_data=requests.get(base_url).json()

pprint(weather_data)