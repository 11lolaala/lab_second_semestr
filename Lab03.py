from collections import namedtuple, deque, Counter, defaultdict

LogRecord = namedtuple("LogRecord", ("level", "text"))
LEVELS = ("INFO", "WARN", "ERROR")


class ConsoleHandler:
    def handle(self, record):
        print(f"[{record.level}] {record.text}")


class FileHandler:
    def __init__(self, filename):
        self.filename = filename

    def handle(self, record):
        with open(self.filename, "a", encoding="utf-8") as f:
            f.write(f"[{record.level}] {record.text}\n")

class Logger:
    def __init__(self, max_records=5, handlers=None):
        if max_records <= 0:
            raise ValueError("max_records должен быть > 0")
        self.records = deque(maxlen=max_records)
        if handlers is None:
            self.handlers = []
        else:
            self.handlers = handlers

    def log(self, level, text):
        if level not in LEVELS:
            raise ValueError("Неизвестный уровень обработки")
        record = LogRecord(level,text)
        self.records.append(record)
        for handler in self.handlers:
            handler.handle(record)
        return record

    def log_info(self,text):
        return self.log("INFO",text)

    def log_warn(self,text):
        return self.log("WARN",text)

    def log_error(self,text):
        return self.log("ERROR",text)

    def get_by_level(self,level):
        if level not in LEVELS:
            raise ValueError("Неизвестный уровень обработки")
        result = []
        for record in self.records:
            if record.level == level:
                result.append(record)
        return result

    def get_statistics(self):
        return Counter(record.level for record in self.records)

    def group_by_level(self):
        result = defaultdict(list)
        for record in self.records:
            result[record.level].append(record)
        return result

    def clear(self):
        self.records.clear()

    def __len__(self):
        return len(self.records)

    def __iter__(self):
        return iter(self.records)

    def __getitem__(self, index):
        return self.records[index]

logger = Logger(3, [ConsoleHandler(), FileHandler("check_log.txt")])
logger.log_info("Старт")
logger.log_warn("Мало памяти")
logger.log_error("Нет соединения")
logger.log_info("Повторный запуск")

print(len(logger))                  # 3
print(list(logger))                 # WARN, ERROR, INFO
print(logger.get_statistics())      # по одной записи каждого уровня
print(logger.get_by_level("INFO"))  # только "Повторный запуск"
print("\n\n\n\n")

print("добавление сообщений и одновременный вывод в консоль и файл")
logger = Logger(3, [ConsoleHandler(), FileHandler("demo_log.txt")])
logger.log_info("старт")
logger.log_warn("мало памяти")
r = logger.log_error("нет соединения")
print("возвращенная запись", r)   # LogRecord(level='ERROR', text='нет соединения')

print("перебор через for")
for record in logger:
    print(record.level, record.text)   # три записи по порядку добавления

print("индексация")
print("первая", logger[0])    # самая старая запись
print("последняя", logger[-1])   # самая новая запись
try:
    logger[10]
except IndexError:
    print("индекс вне буфера")   # сработает IndexError

print("фильтрация")
print("warn", logger.get_by_level("WARN"))   # одна запись warn
print("debug", logger.get_by_level("INFO"))   # пока пустой список

print("counter")
stats = logger.get_statistics()
print(stats)   # по одной записи каждого уровня
print("debug", stats["DEBUG"])   # для отсутствующего ключа будет 0

print("defaultdict")
groups = logger.group_by_level()
print(groups)   # ключ уровень значение список записей
for level, records in groups.items():
    print(level, len(records))

print("переполнение")
logger.log_info("повторный запуск")
print(len(logger))   # все еще 3
print(logger[0])   # старт удален, самая старая теперь warn

print("очистка")
logger.clear()
print(len(logger))   # 0
print(logger.get_by_level("INFO"))   # пустой список
print(logger.get_statistics())   # пустой counter
print(dict(logger.group_by_level()))   # пустой словарь

print("файл после переполнения и очистки не изменился")
with open("demo_log.txt", encoding="utf-8") as f:
    print(f.read())   # все 4 строки на месте

print("независимость двух журналов")
a = Logger(2)
b = Logger(2)
a.log_info("только в a")
print(len(a), len(b))   # 1 и 0

print("неизвестный уровень")
try:
    logger.log("DEBUG", "текст")
except ValueError:
    print("log неизвестный уровень")
try:
    logger.get_by_level("DEBUG")
except ValueError:
    print("get_by_level неизвестный уровень")
print(len(logger))   # 0 журнал не изменился

print("неверный max_records")
try:
    Logger(0)
except ValueError:
    print("max_records должен быть больше нуля")