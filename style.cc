* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
  font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Helvetica, Arial, sans-serif;
}

body {
  background-color: #0b0d19;
  color: #ffffff;
  display: flex;
  justify-content: center;
  align-items: center;
  min-height: 100vh;
  padding: 20px;
}

.container {
  width: 100%;
  max-width: 650px;
  display: flex;
  flex-direction: column;
  gap: 16px;
}

/* Header */
.header {
  display: flex;
  justify-content: space-between;
  align-items: center;
  padding: 10px 0;
}

.brand {
  display: flex;
  align-items: center;
  gap: 12px;
}

.logo-placeholder {
  width: 40px;
  height: 40px;
  background-color: #1e2238;
  border-radius: 8px;
}

.sub-title {
  font-size: 11px;
  color: #8c9bbf;
}

.main-title {
  font-size: 16px;
  font-weight: 700;
}

.badge {
  background-color: #172346;
  color: #5b8bf7;
  font-size: 12px;
  padding: 6px 14px;
  border-radius: 20px;
  border: 1px solid #23376e;
}

/* Main Card */
.main-card {
  background: linear-gradient(180deg, #242f4d 0%, #1a2238 100%);
  border: 1px solid #33446e;
  border-radius: 12px;
  padding: 30px 20px;
  text-align: center;
  box-shadow: 0 4px 20px rgba(0, 0, 0, 0.3);
}

.category {
  font-size: 12px;
  letter-spacing: 2px;
  color: #8c9bbf;
  font-weight: 600;
}

.event-title {
  font-size: 22px;
  font-weight: 700;
  margin: 12px 0;
  line-height: 1.3;
}

.event-date {
  font-size: 13px;
  color: #a3b3d9;
}

/* Status Banner */
.status-banner {
  background: linear-gradient(90deg, #4272d7, #5385ec);
  color: #ffffff;
  text-align: center;
  padding: 12px;
  border-radius: 10px;
  font-size: 13px;
  font-weight: 600;
  box-shadow: 0 0 15px rgba(66, 114, 215, 0.4);
}

/* Links Group */
.links-group {
  display: flex;
  flex-direction: column;
  gap: 12px;
}

.link-btn {
  display: flex;
  align-items: center;
  background-color: #1c263f;
  border: 1px solid #28375c;
  padding: 14px 20px;
  border-radius: 10px;
  color: #ffffff;
  text-decoration: none;
  font-weight: 700;
  font-size: 14px;
  letter-spacing: 0.5px;
  position: relative;
  transition: all 0.2s ease;
}

.link-btn:hover {
  background-color: #233050;
  border-color: #4a6cb4;
  box-shadow: 0 0 12px rgba(74, 108, 180, 0.3);
}

.icon-box {
  background-color: #ffffff;
  color: #1a2238;
  width: 36px;
  height: 36px;
  border-radius: 8px;
  display: flex;
  align-items: center;
  justify-content: center;
  margin-right: 15px;
}

.link-btn span {
  flex-grow: 1;
  text-align: center;
  margin-right: 36px;
}

/* Footer Card */
.footer-card {
  background-color: #141829;
  border: 1px solid #202740;
  padding: 14px 20px;
  border-radius: 10px;
  display: flex;
  justify-content: space-between;
  align-items: center;
  font-size: 12px;
  color: #8c9bbf;
}

.fix-link {
  color: #5b8bf7;
  text-decoration: none;
  font-weight: 600;
}

.fix-link:hover {
  text-decoration: underline;
}
