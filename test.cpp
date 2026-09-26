//#include <iostream>
//#include <vector>
//#include <string>
//#include <cassert>
//
//struct TimetableEntry {
//    std::string course;
//    std::string room;
//    std::string time;
//};
//
//std::vector<TimetableEntry> timetable;
//
//bool IsConflict(std::string room, std::string time) {
//    for (auto& entry : timetable) {
//        if (entry.room == room && entry.time == time) {
//            return true;
//        }
//    }
//    return false;
//}
//
//bool CreateTimetableEntry(std::string course, std::string room, std::string time) {
//    if (IsConflict(room, time)) {
//        std::cout << "Conflict Error: Room already booked at this time!\n";
//        return false;
//    }
//    timetable.push_back({ course, room, time });
//    return true;
//}
//
//void TestCreateEntry_Success() {
//    bool result = CreateTimetableEntry("CS101", "Room1", "9AM");
//    assert(result == true);
//    std::cout << "TestCreateEntry_Success PASSED\n";
//}
//
//void TestCreateEntry_ConflictDetected() {
//    CreateTimetableEntry("CS102", "Room1", "10AM");
//    bool result = CreateTimetableEntry("CS103", "Room1", "10AM");
//    assert(result == false);
//    std::cout << "TestCreateEntry_ConflictDetected PASSED\n";
//}
//
//int main() {
//    TestCreateEntry_Success();
//    TestCreateEntry_ConflictDetected();
//    return 0;
//}