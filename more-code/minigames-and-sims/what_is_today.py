#!/usr/bin/python3

import datetime
from datetime import date

HOLIDAYS_LIST = {
    "01-01": "New Years",
    "03-17": "St. Patrick's Day",
    "04-01": "April Fools Day",
    "07-04": "US Independence Day",
    "10-31": "Halloween",
    "12-24": "Christmas Eve",
    "12-25": "Christmas",
}


def main():
    x = date.today()
    print(f"Today is {x}!")
    y = x.strftime("%m-%d")
    if y in HOLIDAYS_LIST:
        a = HOLIDAYS_LIST.get(y)
        print(f"Happy {a}!")
    else:
        print("Today might not be a holiday but it will be a great day")


if __name__ == "__main__":
    main()
