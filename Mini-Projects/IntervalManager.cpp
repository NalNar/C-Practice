// Built a command-line C++ utility to store, merge, query, and delete integer intervals
// Used STL components (vectors, sorting, custom comparator) to design efficient operations.
// Deepened understanding of value semantics, references, memory behavior, and RAII principle

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

struct Interval {
    int start;
    int end;
    
    Interval(int s, int e) : start(s), end(e) {}
    
    bool operator<(const Interval& other) const {
        return start < other.start;
    }
};

class IntervalManager {
private:
    std::vector<Interval> intervals;
    
    // Helper function to merge overlapping intervals
    void mergeIntervals() {
        if (intervals.empty()) return;
        
        std::sort(intervals.begin(), intervals.end());
        
        std::vector<Interval> merged;
        merged.push_back(intervals[0]);
        
        for (size_t i = 1; i < intervals.size(); ++i) {
            if (intervals[i].start <= merged.back().end) {
                merged.back().end = std::max(merged.back().end, intervals[i].end);
            } else {
                merged.push_back(intervals[i]);
            }
        }
        
        intervals = merged;
    }
    
public:
    // Add an interval
    void addInterval(int start, int end) {
        if (start > end) {
            std::cout << "Invalid interval: start > end\n";
            return;
        }
        intervals.push_back(Interval(start, end));
        mergeIntervals();
        std::cout << "Interval [" << start << ", " << end << "] added.\n";
    }
    
    // Delete an interval
    void deleteInterval(int start, int end) {
        auto it = std::find_if(intervals.begin(), intervals.end(),
                              [start, end](const Interval& i) {
                                  return i.start == start && i.end == end;
                              });
        
        if (it != intervals.end()) {
            intervals.erase(it);
            std::cout << "Interval [" << start << ", " << end << "] deleted.\n";
        } else {
            std::cout << "Interval [" << start << ", " << end << "] not found.\n";
        }
    }
    
    // Query if a point exists in any interval
    bool queryPoint(int point) {
        for (const auto& interval : intervals) {
            if (point >= interval.start && point <= interval.end) {
                return true;
            }
        }
        return false;
    }
    
    // Query if a range overlaps with any interval
    bool queryRange(int start, int end) {
        for (const auto& interval : intervals) {
            if (!(end < interval.start || start > interval.end)) {
                return true;
            }
        }
        return false;
    }
    
    // Display all intervals
    void display() {
        if (intervals.empty()) {
            std::cout << "No intervals stored.\n";
            return;
        }
        std::cout << "Stored intervals:\n";
        for (const auto& interval : intervals) {
            std::cout << "[" << interval.start << ", " << interval.end << "]\n";
        }
    }
    
    // Get all intervals (for RAII and value semantics demonstration)
    const std::vector<Interval>& getIntervals() const {
        return intervals;
    }
    
    // Clear all intervals
    void clear() {
        intervals.clear();
        std::cout << "All intervals cleared.\n";
    }
};

void printMenu() {
    std::cout << "\n=== Interval Manager ===\n";
    std::cout << "1. Add interval\n";
    std::cout << "2. Delete interval\n";
    std::cout << "3. Query point\n";
    std::cout << "4. Query range\n";
    std::cout << "5. Display all intervals\n";
    std::cout << "6. Clear all intervals\n";
    std::cout << "7. Exit\n";
    std::cout << "Enter choice: ";
}

int main(){
    IntervalManager manager;
    int choice;
    
    while (true) {
        printMenu();
        std::cin >> choice;
        
        switch (choice) {
            case 1: {
                int start, end;
                std::cout << "Enter start and end: ";
                std::cin >> start >> end;
                manager.addInterval(start, end);
                break;
            }
            case 2: {
                int start, end;
                std::cout << "Enter start and end of interval to delete: ";
                std::cin >> start >> end;
                manager.deleteInterval(start, end);
                break;
            }
            case 3: {
                int point;
                std::cout << "Enter point to query: ";
                std::cin >> point;
                if (manager.queryPoint(point)) {
                    std::cout << "Point " << point << " exists in an interval.\n";
                } else {
                    std::cout << "Point " << point << " does not exist in any interval.\n";
                }
                break;
            }
            case 4: {
                int start, end;
                std::cout << "Enter range to query (start end): ";
                std::cin >> start >> end;
                if (manager.queryRange(start, end)) {
                    std::cout << "Range [" << start << ", " << end << "] overlaps with stored intervals.\n";
                } else {
                    std::cout << "Range [" << start << ", " << end << "] does not overlap.\n";
                }
                break;
            }
            case 5: {
                manager.display();
                break;
            }
            case 6: {
                manager.clear();
                break;
            }
            case 7: {
                std::cout << "Exiting...\n";
                return 0;
            }
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}